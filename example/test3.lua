quest black_notice_multi_test begin
	state start begin
		when login begin
			notice(locale_quest(6216)) -- notice multi line
		end
	end
end
