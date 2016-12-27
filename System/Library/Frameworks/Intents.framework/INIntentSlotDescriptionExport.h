/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INIntentSlotDescriptionExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long tag; 
@property (nonatomic,copy,readonly) NSString * facadePropertyName; 
@property (nonatomic,copy,readonly) NSString * dataPropertyName; 
@property (nonatomic,readonly) long long valueType; 
@property (nonatomic,readonly) long long valueStyle; 
@property (nonatomic,readonly) BOOL isExtended; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,readonly) SEL resolveSelector; 
@property (nonatomic,readonly) SEL deprecatedResolveSelector; 
@required
-(id)init;
-(NSString *)name;
-(unsigned long long)tag;
-(BOOL)isExtended;
-(long long)valueType;
-(BOOL)isPrivate;
-(NSString *)facadePropertyName;
-(NSString *)dataPropertyName;
-(long long)valueStyle;
-(SEL)resolveSelector;
-(SEL)deprecatedResolveSelector;

@end
