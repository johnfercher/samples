--MIT License
--
--Copyright (c) 2016 Johnathan Fercher
--
--Permission is hereby granted, free of charge, to any person obtaining a copy
--of this software and associated documentation files (the "Software"), to deal
--in the Software without restriction, including without limitation the rights
--to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
--copies of the Software, and to permit persons to whom the Software is
--furnished to do so, subject to the following conditions:
--
--The above copyright notice and this permission notice shall be included in all
--copies or substantial portions of the Software.


-- calc avg from any number of notes
function avg (a)
    sum = 0                                     -- sum
    qtd = #a                                    -- qtd of elements in a
    for i, v in ipairs(a) do                    -- foreach v in a
        sum = sum + v                           -- adding the values of v in sum
    end
    return sum/qtd                              -- calc avg
end


function read_notes ()
    -- menu from read_notes
    local function menu ()
        os.execute("clear")                     -- system(clear);
        print("any number - add note in notes")
        print("q - quit and calc avg")
    end

    local notes = {}                            -- create a table
    local exit = false
    local io_buffer = ""

    while not exit do
        menu()
        io_buffer = io.read()                   -- io.read, reads like string

        if io_buffer == "q" then
            exit = true
        else
            table.insert(notes, io_buffer)      -- insert the datas in the tablee
        end
    end

    -- convert all strings to numbers
    for i = 1, #notes do                        -- foreach note in notes
        notes[i] = tonumber(notes[i])           -- convert to number
    end

    -- calc the avg
    avg_val = avg(notes)                        -- calc avg

    print("the avg is " .. avg_val)

    -- sleep for 1 second
    os.execute("sleep " .. tonumber(1))
end

-- main function
function main ()
    -- menu from main
    local function menu ()
        os.execute("clear")                     -- system(clear);
        print("c - calc avg")
        print("q - quit")
    end

    local exit = false                          -- exit var
    local io_buffer = ""                           -- io var

    while not exit do
        menu()
        io_buffer = io.read()
        
        if io_buffer == "q" then
            exit = true
        else
            read_notes()
        end
    end
end

main()