/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * longhands; 
@property (nonatomic,copy) NSArray * values; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setLonghands:(NSArray *)arg1 ;
-(NSArray *)longhands;
@end

