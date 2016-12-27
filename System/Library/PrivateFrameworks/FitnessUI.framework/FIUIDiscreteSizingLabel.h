/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@protocol FIUIDiscreteSizingLabelDelegate;
@interface FIUIDiscreteSizingLabel : UILabel {

	id<FIUIDiscreteSizingLabelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FIUIDiscreteSizingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FIUIDiscreteSizingLabelDelegate>)arg1 ;
-(id<FIUIDiscreteSizingLabelDelegate>)delegate;
-(void)setText:(id)arg1 ;
@end
