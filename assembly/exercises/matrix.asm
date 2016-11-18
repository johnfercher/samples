.data
enter: .asciiz "\n"
line: .asciiz "-"
quant: .word 50

.text

.globl main
main:
	move $s0, $gp	# initial point to save array 1
	li $v0, 5		# read integer
	syscall
	move $s3, $v0
	#lw $s3, quant	# saves array dimension

	mult $s3, $s3	# get numbers of elements in array
	mflo $s4

fill_matrix1:
	li $t0, 0		# for counter
	move $t1, $s0	# get array reference

	for_fill1:
		li $v0, 42			# system call to generate random int
		li $a1, 10 			# where you set the upper bound
		syscall				# your generated number will be in $a0

		sb $a0, 0($t1)

		addi $t1, $t1, 4	# add array reference
		addi $t0, $t0, 1	# add for counter

		bne $t0, $s4, for_fill1

fill_matrix2:
	
	li $t0, 0			# for counter
	move $s1, $t1		# store array 2 initial reference

	for_fill2:
		li $v0, 42			# system call to generate random int
		li $a1, 10 			# where you set the upper bound
		syscall				# your generated number will be in $a0

		sb $a0, 0($t1)

		addi $t1, $t1, 4	# add array reference
		addi $t0, $t0, 1	# add for counter

		bne $t0, $s4, for_fill2

		#move $a1, $s0
		#jal print

		#li $v0, 4
		#la $a0, enter
		#syscall

	#	move $a1, $s1
	#	jal print

multiply:
	# t2 -> i
	# t3 -> j
	# t4 -> k
	# t5 -> hold variable

	move $s5, $t1

	li $t2, -1
	li $t3, -1
	move $t4, $zero

	for1:
		addi $t2, $t2, 1
		beq $t2, $s3, exit_mult
		li $t3, -1

		for2:
			addi $t3, $t3, 1
			beq $t3, $s3, for1
			li $t4, 0
			li $t5, 0

			for3:
				move $a0, $t2
				move $a1, $t4
				move $a2, $s0
				jal calculate_index
				move $v1, $a0

				move $a0, $t4
				move $a1, $t3
				move $a2, $s1
				jal calculate_index

				mult $v1, $a0
				mflo $v0

				add $t5, $t5, $v0	# hold += a[i][k] * b[k][j]

				addi $t4, $t4, 1
				bne $t4, $s3, for3

				sb $t5, 0($t1)
				addi $t1, $t1, 4

				j for2


exit_mult:
	move $a1, $s5
	jal print
	j exit


print:
	
	li $t7, -1		# i counter
	li $t8, 0		# j counter

	loop_outer_print:

		addi $t7, $t7, 1
		beq $t7, $s3, exit_print

		li $t8, 0
		loop_inner_print:

			lb $a0, 0($a1)		# load the array value located at t1
			li $v0, 1
			syscall				# syscall passando $v0 = 1

			addi $a1, $a1, 4 	# increment array reference
			addi $t8, $t8, 1 	# j++
			
			li $v0, 4	
			la $a0, line
			syscall				# syscall passando $v0 = 4 - imprime string
			
			bne $t8, $s3, loop_inner_print	# caso a contagem atual seja igual ao tamanho do vetor, quit

			la $a0, enter
			syscall

			beq $t8, $s3, loop_outer_print

exit_print:
	jr $ra

calculate_index:
	# a0 = i
	# a1 = j
	# a2 = array reference

	# base of array + 4 * (n * i + j)
	mult $s3, $a0		# n * i
	mflo $a3			# a3 = n*i
	add $a3, $a3, $a1	# a3 = (n*i)+j
	li $t0, 4
	mult $a3, $t0		# 4 * ((n*i)+j)
	mflo $a3			# a3 = 4 * ((n*i)+j)
	add $a3, $a3, $a2	# a3 = base + 4 * ((n*i)+j)

	lb $a0, 0($a3)		# retorna o valor

	jr $ra

exit:
	li $v0, 10
	syscall





	



