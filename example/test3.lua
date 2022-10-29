quest black_notice_multi_test begin
	state start begin
		when login begin
			notice("[LC;6216]") -- notice multi line
		end
	end
end