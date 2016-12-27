/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface ASDSelectorControl : ASDControl {

	unsigned _selectedValue;
	NSMutableArray* _values;
	NSObject*<OS_dispatch_queue> _valueQueue;
	BOOL _valueIsSettable;

}

@property (assign,nonatomic) unsigned selectedValue; 
-(void)addValue:(id)arg1 ;
-(unsigned)objectClass;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(unsigned)baseClass;
-(void)changeValue:(unsigned)arg1 ;
-(id)initWithIsSettable:(BOOL)arg1 forElement:(unsigned)arg2 inScope:(unsigned)arg3 withPlugin:(id)arg4 ;
-(void)setSelectedValue:(unsigned)arg1 ;
-(id)initWithIsSettable:(BOOL)arg1 withPlugin:(id)arg2 ;
-(void)removeValue:(id)arg1 ;
-(unsigned)selectedValue;
@end
