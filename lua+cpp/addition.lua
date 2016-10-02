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

function addition (a)
    sum = 0

    for i, v in ipairs(a) do sum = sum + v end

    return sum
end

a = {123, 1661, 8775, 77, 325.7, 146.9004}

sum = addition(a)
print(sum)