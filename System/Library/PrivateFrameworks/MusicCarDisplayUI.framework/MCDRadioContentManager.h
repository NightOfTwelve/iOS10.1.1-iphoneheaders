/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCDRadioDataSourceDelegate.h>

@protocol MCDRadioContentManagerDelegate;
@class RadioRecentStationsController, MCDRadioDataSource, NSString;

@interface MCDRadioContentManager : NSObject <MCDRadioDataSourceDelegate> {

	RadioRecentStationsController* _recentStationsController;
	id<MCDRadioContentManagerDelegate> _delegate;
	MCDRadioDataSource* _dataSource;

}

@property (nonatomic,retain) MCDRadioDataSource * dataSource;                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (assign,nonatomic,__weak) id<MCDRadioContentManagerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setDataSource:(MCDRadioDataSource *)arg1 ;
-(void)setDelegate:(id<MCDRadioContentManagerDelegate>)arg1 ;
-(void)dealloc;
-(MCDRadioDataSource *)dataSource;
-(id<MCDRadioContentManagerDelegate>)delegate;
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(RadioRecentStationsController *)recentStationsController;
-(void)recentRadioStationsDidUpdate:(id)arg1 ;
-(void)radioDataSourceDidInvalidate:(id)arg1 ;
-(void)fetchRecentStations;
-(void)fetchFeaturedStations;
@end

