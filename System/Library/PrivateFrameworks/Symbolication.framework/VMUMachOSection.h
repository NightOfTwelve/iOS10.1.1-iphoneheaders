/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VMUMachOSection : NSObject {

	unsigned long long _localAddress;
	unsigned long long _mappingSize;

}
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 remoteAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(unsigned long long)mappingSize;
-(unsigned long long)localAddress;
@end
