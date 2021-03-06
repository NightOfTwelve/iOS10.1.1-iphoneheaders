/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <FMF/RefreshControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class FMFSAMyLocation, NSString, RefreshController, UITableView, NSDictionary;

@interface SAFMFVisibilityController : SiriUISnippetViewController <RefreshControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL isVisible;
	BOOL disableSelection;
	FMFSAMyLocation* myLocation;
	NSString* clientId;
	RefreshController* refreshController;
	UITableView* _tableView;
	NSDictionary* _contextDict;

}

@property (assign,nonatomic) BOOL disableSelection; 
@property (nonatomic,retain) FMFSAMyLocation * myLocation; 
@property (nonatomic,retain) RefreshController * refreshController; 
@property (nonatomic,retain) NSDictionary * contextDict;                         //@synthesize contextDict=_contextDict - In the implementation block
@property (assign,nonatomic) BOOL isVisible; 
@property (nonatomic,copy) NSString * clientId; 
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snippetViewController:(id)arg1 ;
-(RefreshController *)refreshController;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)setMyLocation:(FMFSAMyLocation *)arg1 ;
-(void)locationsUpdated:(id)arg1 ;
-(void)setRefreshController:(RefreshController *)arg1 ;
-(NSDictionary *)contextDict;
-(void)setContextDict:(NSDictionary *)arg1 ;
-(void)setDisableSelection:(BOOL)arg1 ;
-(void)refreshCancelled;
-(FMFSAMyLocation *)myLocation;
-(BOOL)disableSelection;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(BOOL)isVisible;
-(id)initWithAceObject:(id)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(id)proximity;
-(double)desiredHeight;
-(id)friends;
@end

