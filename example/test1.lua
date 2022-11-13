quest black_mapinfo_test begin
	state start begin
		when letter begin
			send_letter(locale_quest(6457))
		end

		when info or button begin
			say_title(locale_quest(6457))
			say(locale_quest(6459, "Joan", 15, 20000))
			say(locale_quest(1534, "Joan"))

			local s = select(locale_quest(6555), locale_quest(6556))
			if s == 1 then
				say(locale_quest(6232))
			end
		end
	end
end
