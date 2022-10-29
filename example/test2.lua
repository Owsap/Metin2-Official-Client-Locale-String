quest black_shoulder_test begin
	state start begin
		when letter begin
			send_letter("[LC;20]")
		end

		when info or button begin
			say_title("[LC;20]")
			say("[LC;21]")
		end
	end
end