/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CRHomeScreenState <NSObject>
@property (nonatomic,copy,readonly) NSArray * iconState; 
@property (nonatomic,copy,readonly) NSArray * hiddenIcons; 
@property (nonatomic,readonly) unsigned long long rows; 
@property (nonatomic,readonly) unsigned long long columns; 
@required
-(NSArray *)iconState;
-(NSArray *)hiddenIcons;
-(unsigned long long)rows;
-(unsigned long long)columns;

@end

