	.text
	.byte 1
test:	.byte 0
	.byte 5
	.pword handle(datasym)		
	.byte 0xA5

	.data
	.byte 1		
datasym:.byte 2
	.byte 3
	
	.end
