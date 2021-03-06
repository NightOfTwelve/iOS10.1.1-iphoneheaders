/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLockHardwareButtonActions : NSObject {

	BOOL _didPlayLockSound;
	BOOL _dontLockOnNextLockUp;
	BOOL _fadeOutInProgressFromLockButtonWhileUnlocked;
	BOOL _undidFadeOutFromLockButton;
	BOOL _useDashBoard;
	BOOL _isButtonDown;

}

@property (nonatomic,readonly) BOOL isButtonDown;              //@synthesize isButtonDown=_isButtonDown - In the implementation block
-(BOOL)isButtonDown;
-(BOOL)performButtonDownPreActions;
-(void)performButtonDownActions;
-(BOOL)performButtonUpPreActions;
-(void)performSinglePressAction;
-(BOOL)reverseFadeOutIfNeeded;
-(void)_playLockSound;
-(void)performLongPressActions;
-(id)init;
@end

