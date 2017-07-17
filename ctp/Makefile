

objects = main.o CustomMdSpi.o CustomTradeSpi.o StrategyTrade.o TickToKlineHelper.o thostmduserapi.so thosttraderapi.so

a : $(objects)
	g++ -o a $(objects)

main.o : main.cpp CustomMdSpi.h CustomTradeSpi.h TickToKlineHelper.h
	cc -c main.cpp

CustomMdSpi.o : CustomMdSpi.cpp CustomMdSpi.h TickToKlineHelper.h
	g++ -c CustomMdSpi.cpp

CustomTradeSpi.o : CustomTradeSpi.cpp CustomTradeSpi.h StrategyTrade.h
	g++ -c CustomTradeSpi.cpp

StrategyTrade.o : StrategyTrade.cpp StrategyTrade.h CustomTradeSpi.h
	g++ -c StrategyTrade.cpp

TickToKlineHelper.o : TickToKlineHelper.cpp CTP_API/ThostFtdcUserApiStruct.h TickToKlineHelper.h
	g++ -c TickToKlineHelper.cpp

thostmduserapi.so :
	cp CTP_API/thostmduserapi.so .

thosttraderapi.so :
	cp CTP_API/thosttraderapi.so .

.PHONY : clean install

clean :
	rm $(objects)

install :
	mv a test/ 

