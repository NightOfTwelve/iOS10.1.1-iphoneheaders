/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/ABPropertyEditingTableViewCellDelegate.h>

@protocol ABSimpleTextInputViewControllerDelegate, ABStyleProvider;
@class NSString;

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate> {

	id<ABSimpleTextInputViewControllerDelegate> _delegate;
	id _value;
	NSString* _placeholder;
	id<ABStyleProvider> _styleProvider;

}

@property (assign,nonatomic) id<ABSimpleTextInputViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                                 //@synthesize styleProvider=_styleProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<ABSimpleTextInputViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<ABSimpleTextInputViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(BOOL)_allowsAutorotation;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)save:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(void)setTitleLocalizationKey:(id)arg1 ;
-(void)propertyEditingTableViewCell:(id)arg1 valueDidChange:(id)arg2 ;
-(void)updateSaveButton;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
@end

