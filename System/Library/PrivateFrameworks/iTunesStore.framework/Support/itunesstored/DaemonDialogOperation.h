/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISDialog, SSVDialogResponse;

@interface DaemonDialogOperation : ISOperation {

	ISDialog* _dialog;
	SSVDialogResponse* _dialogResponse;
	BOOL _displaysOnLockscreen;
	/*^block*/id _outputBlock;

}

@property (readonly) ISDialog * dialog; 
@property (assign) BOOL displaysOnLockscreen; 
@property (copy) id outputBlock; 
@property (copy,readonly) SSVDialogResponse * dialogResponse; 
-(SSVDialogResponse *)dialogResponse;
-(void)dealloc;
-(void)run;
-(BOOL)displaysOnLockscreen;
-(void)setDisplaysOnLockscreen:(BOOL)arg1 ;
-(id)initWithDialog:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(ISDialog *)dialog;
-(id)outputBlock;
@end

