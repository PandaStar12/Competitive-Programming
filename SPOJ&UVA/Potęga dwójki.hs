module Main where
main = interact $ unwords . map (show . (2 ^) . read) . words
