
path_counts = {}

for line in io.stdin:lines() do
   if path_counts[line] == nil then
      path_counts[line] = 0
   end

   path_counts[line] = path_counts[line] + 1
end

-- Lua doesn't have sorting on tables, so the idiomatic way of doing
-- this is to throw everything into an array and sort there.
local ordered = {}
for path, count in pairs(path_counts) do
  table.insert(ordered, { path, count })
end
table.sort(ordered, function(a, b) return a[2] > b[2] end)

for i = 1, 10 do
   print(ordered[i][1], ordered[i][2])
end
