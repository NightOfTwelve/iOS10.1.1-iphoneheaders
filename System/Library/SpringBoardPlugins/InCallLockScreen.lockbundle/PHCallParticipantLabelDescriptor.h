/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PHCallParticipantLabelDescriptor : NSObject {

	BOOL _dynamic;
	NSArray* _strings;
	NSString* _secondaryString;
	unsigned long long _layoutState;

}

@property (nonatomic,retain) NSArray * strings;                           //@synthesize strings=_strings - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                  //@synthesize secondaryString=_secondaryString - In the implementation block
@property (assign,nonatomic) unsigned long long layoutState;              //@synthesize layoutState=_layoutState - In the implementation block
@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;               //@synthesize dynamic=_dynamic - In the implementation block
+(id)labelDescriptorWithArray:(id)arg1 ;
+(id)organizationNameForCall:(id)arg1 ;
+(id)labelDescriptorWithFormat:(id)arg1 ;
+(id)labelDescriptorWithArray:(id)arg1 secondaryString:(id)arg2 layoutState:(unsigned long long)arg3 ;
+(id)labelDescriptorWithStringsForCall:(id)arg1 callCount:(long long)arg2 callCenter:(id)arg3 metadataClientController:(id)arg4 ;
+(id)labelDescriptorWithStringsForCall:(id)arg1 callCount:(long long)arg2 ;
-(NSArray *)strings;
-(void)setStrings:(NSArray *)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(unsigned long long)layoutState;
-(void)setLayoutState:(unsigned long long)arg1 ;
-(BOOL)isDynamic;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)secondaryString;
@end
