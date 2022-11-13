quest black_shoulder_test begin
	state start begin
		when letter begin
			send_letter(locale_quest(20))
		end

		when info or button begin
			say_title(locale_quest(20))
			say(locale_quest(21))
		end
	end
end
