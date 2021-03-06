/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMainDisplayLayoutContext <SBLayoutContext>
@property (nonatomic,readonly) long long sideAppPresentationStyle; 
@property (nonatomic,readonly) long long sideAppWidth; 
@property (nonatomic,readonly) long long externallyManagedSideAppPresentationStyle; 
@property (nonatomic,readonly) long long externallyManagedSideAppWidth; 
@required
-(long long)wallpaperMode;
-(long long)sideAppPresentationStyle;
-(long long)wallpaperModeForLayoutRole:(long long)arg1;
-(BOOL)includesStatusBarForLayoutRole:(long long)arg1;
-(long long)sideAppWidth;
-(long long)externallyManagedSideAppPresentationStyle;
-(long long)externallyManagedSideAppWidth;

@end

