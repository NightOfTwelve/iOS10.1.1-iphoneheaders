/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActionSheetPresentationControllerVisualStyle.h>

@class UIColor, UIActionSheetiOSDismissActionView, NSString;

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle> {

	UIActionSheetiOSDismissActionView* _dismissActionView;

}

@property (nonatomic,retain) UIActionSheetiOSDismissActionView * dismissActionView;              //@synthesize dismissActionView=_dismissActionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) UIColor * dimmingViewColor; 
@property (readonly) double cornerRadius; 
-(id)init;
-(double)cornerRadius;
-(UIEdgeInsets)contentInsets;
-(UIActionSheetiOSDismissActionView *)dismissActionView;
-(void)setDismissActionView:(UIActionSheetiOSDismissActionView *)arg1 ;
-(UIColor *)dimmingViewColor;
@end

