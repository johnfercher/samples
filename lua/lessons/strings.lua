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


print("teste\nteste\tteste")

ppap_introduction = [[
    PPAP
    I have a pen
    I have an apple
    Annnn
    Apple-Pen
    I have a pen
    I have a pinepple
    Annnn
    Pinepple-Pen
]]

ppap_final = [[
    Apple-Pen
    Pinepple-Pen
    Annnn
    Pen-Pinepple-Apple-Pen
]]

print(ppap_introduction .. "...\n" .. ppap_final)