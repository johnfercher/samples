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


function distance (x, y)
    return math.abs(x - y)
end

function get_early (a, b)
    distance_min = 1024.23
    id_min = 0

    for i = 1, 5 do
        dist = distance(a[i], b)
        print(dist)
        if dist < distance_min then
            distance_min = dist
            id_min = i
        end
    end

    print("The early number of b have the id " .. id_min .. " and your value is " .. a[id_min])
end

function variable_arguments (...)
    for i, v in ipairs(arg) do
        print(v)
    end
end

function print_all_values (a)
    print("All values");
    for i, v in ipairs(a) do
        print(v)
    end
end

a = { 100, 123, 22, 451, 60}
b = 55

--get_early(a, b)
--print_all_values(a)
variable_arguments("arroz", 2, "ppap", 241.21)