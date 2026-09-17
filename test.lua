local Living = {}

Living.Animal.__index = Living.Animal
function Living.Animal:new(name, sound)
    local instance = {
        name = name or "Unknown",
        sound = sound or "Silence"
    }
    
    setmetatable(instance, self) 
    return instance
end

function Living.Animal:makeSound()
    print(self.name .. " says " .. self.sound .. "!")
end


Living.Human.__index = Living.Animal
function Living.Human:new(name, sound, job)
    local instance = {
        name = name or "Unknown",
        sound = sound or "Silence",
        job = job or "Unemployed"
    }
    
    setmetatable(instance, self) 
    return instance
end

function Living.Human:makeSound()
    print(self.name .. " says " .. self.sound .. "!")
end