/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardAccessibility_super.h>

@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(void)deactivate;
-(void)insertDictationResult:(id)arg1 ;
-(void)dictationRecognitionFailed;
-(void)activate;
-(CGRect)accessibilityFrame;
-(id)_accessibilityNativeFocusPreferredElement;
-(BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(BOOL)_axDeleteByCharacter;
-(BOOL)_axDeleteByWord;
-(BOOL)_axAdvanceKeyboardPlane:(BOOL)arg1 ;
-(BOOL)_axCommitWord;
-(BOOL)_axEnterTextValue:(id)arg1 ;
-(BOOL)_axAdvanceKeyboardSuggestion:(BOOL)arg1 ;
-(BOOL)_axAdvanceInternationalKeyboard:(BOOL)arg1 ;
-(BOOL)_axShift;
-(BOOL)_axShiftLock;
-(BOOL)_accessibilitySwitchToGestureMode:(BOOL)arg1 ;
-(void)_voiceOverStatus:(id)arg1 ;
-(BOOL)_accessibilityTriggerDictationFromPath:(id)arg1 ;
-(CGRect)_accessibilityDirectInteractionFrame;
@end
