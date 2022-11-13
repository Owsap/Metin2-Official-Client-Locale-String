-- @desc: function for locale quest converstion
-- @ref: https://www.lua.org/pil/5.2.html
-- @author: Owsap
locale_quest = function(vnum, ...)
	local val = ""
	for i, v in ipairs(arg) do
		val = val .. tostring(string.format(";%s", v))
	end
	return string.format("[LC;%d%s]", vnum, val)
end

locale_string = function(vnum, ...)
	local val = ""
	for i, v in ipairs(arg) do
		val = val .. tostring(string.format(";%s", v))
	end
	return string.format("[LS;%d%s]", vnum, val)
end

locale_in = function(vnum)
	return string.format("[IN;%d]", vnum)
end

locale_mn = function(vnum)
	return string.format("[MN;%d]", vnum)
end

locale_sn = function(vnum)
	return string.format("[SN;%d]", vnum)
end

locale_psn = function(vnum)
	return string.format("[PSN;%d]", vnum)
end

locale_ox = function(vnum)
	return string.format("[LOX;%d]", vnum)
end
