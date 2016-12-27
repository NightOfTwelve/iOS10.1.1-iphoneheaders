/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIBarButtonItem;

@interface _UIButtonBarTargetAction : NSObject {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _actionFilter;

}

@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,copy) id actionFilter;                                  //@synthesize actionFilter=_actionFilter - In the implementation block
@property (nonatomic,readonly) SEL proxyAction; 
-(id)init;
-(UIBarButtonItem *)barButtonItem;
-(id)initWithBarButtonItem:(id)arg1 ;
-(void)setActionFilter:(id)arg1 ;
-(SEL)proxyAction;
-(void)_invoke:(id)arg1 forEvent:(id)arg2 ;
-(id)actionFilter;
@end
