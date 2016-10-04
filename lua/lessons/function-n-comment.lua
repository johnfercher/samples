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


function norm (x, y)
    local n2 = x^2 + y^2;
    return math.sqrt(n2);
end

function twice (x)
    return 2*x
end

-- comment to call on 2
--n = norm(3.4, 1.0)
--print(twice(n))