/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFMessageBodyParserObject : NSObject {

	double _timeoutTime;
	BOOL _shouldAbort;
	BOOL _didTimeout;
	BOOL _copyBlocks;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(void)abortParsing;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(void)messageBodyParserWillBeginParsing:(id)arg1 ;
-(BOOL)shouldProceedParsing;
-(void)copyBlocks;
-(BOOL)areBlocksCopied;
@end

