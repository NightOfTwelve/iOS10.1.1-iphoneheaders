/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardEmojiSplit.h>

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit {

	BOOL _whiteText;
	unsigned long long _currentSelected;
	long long _lastUsedCategory;

}

@property (assign) BOOL whiteText;              //@synthesize whiteText=_whiteText - In the implementation block
-(void)dealloc;
-(void)didMoveToWindow;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)whiteText;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateToCategory:(long long)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)updateCategorySelectedIndicator:(long long)arg1 ;
-(id)titleForRow:(long long)arg1 fallback:(BOOL)arg2 ;
-(id)symbolForRow:(long long)arg1 ;
-(void)setWhiteText:(BOOL)arg1 ;
@end
