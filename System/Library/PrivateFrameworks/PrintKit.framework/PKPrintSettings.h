/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject {

	NSMutableDictionary* _dict;
	PKPaper* paper;

}

@property (nonatomic,retain) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) PKPaper * paper; 
+(id)photo;
+(id)default;
+(id)printSettingsForPrinter:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(PKPaper *)paper;
-(void)setPaper:(PKPaper *)arg1 ;
-(NSMutableDictionary *)dict;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(id)settingsDict;
@end
