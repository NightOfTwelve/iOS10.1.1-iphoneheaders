/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VMUFieldInfo;

@interface VMUFieldValue : NSObject {

	VMUFieldInfo* _field;
	unsigned long long _value;

}

@property (nonatomic,readonly) VMUFieldInfo * field; 
@property (nonatomic,readonly) unsigned long long value; 
-(void)dealloc;
-(unsigned long long)value;
-(VMUFieldInfo *)field;
-(id)initWithField:(id)arg1 value:(unsigned long long)arg2 ;
@end

