quest black_mapinfo_test begin
	state start begin
		when letter begin
			send_letter("[LC;6457]")
		end

		when info or button begin
			say_title("[LC;6457]")
			say(string.format("[LC;6459;%s;%d;%d]", "Joan", 15, 20000))		
			say(string.format("[LC;1534;%s]", "Joan"))
			
			local s = select("[LC;6555]", "[LC;6556]")
			if s == 1 then
				say("[LC;6232]")
			end
		end
	end
end