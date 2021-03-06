/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWallpaperObserver.h>

@class NSMutableSet, NSString;

@interface SBWallpaperEffectSnapshotCache : NSObject <SBWallpaperObserver> {

	NSMutableSet* _mappedImageKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)wallpaperWillChangeForVariant:(long long)arg1 ;
-(id)snapshotForKey:(id)arg1 withGenerationBlockIfNecessary:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

