/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PageLoadTestRunnerDelegate;
#import <MobileSafari/MobileSafari-Structs.h>
@class NSMutableArray, NSOutputStream, NSString, BrowserController;

@interface PageLoadTestRunner : NSObject {

	BOOL _started;
	BOOL _loadURLInNewTab;
	BOOL _measureTime;
	NSMutableArray* _pagesNeedingMemoryWarningSent;
	NSMutableArray* _pageLoadArray;
	double _savedDefaultTimeoutInterval;
	NSOutputStream* _logStream;
	BOOL _disableProgressBar;
	BOOL _failFast;
	BOOL _resetsZoomBetweenPages;
	BOOL _collectHeapStatistics;
	BOOL _checkForWorldLeaks;
	int _cacheClearDirective;
	NSString* _logFile;
	NSString* _outputFilename;
	NSString* _suiteName;
	unsigned long long _skipCount;
	double _pageTimeout;
	double _pageActionInterval;
	double _pageRestInterval;
	id<PageLoadTestRunnerDelegate> _delegate;
	unsigned long long _tabCount;
	BrowserController* _browserController;

}

@property (nonatomic,retain) NSString * logFile;                                          //@synthesize logFile=_logFile - In the implementation block
@property (nonatomic,retain) NSString * outputFilename;                                   //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,retain) NSString * suiteName;                                        //@synthesize suiteName=_suiteName - In the implementation block
@property (assign,nonatomic) unsigned long long skipCount;                                //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) BOOL disableProgressBar;                                     //@synthesize disableProgressBar=_disableProgressBar - In the implementation block
@property (assign,nonatomic) BOOL failFast;                                               //@synthesize failFast=_failFast - In the implementation block
@property (assign,nonatomic) BOOL resetsZoomBetweenPages;                                 //@synthesize resetsZoomBetweenPages=_resetsZoomBetweenPages - In the implementation block
@property (assign,nonatomic) double pageTimeout;                                          //@synthesize pageTimeout=_pageTimeout - In the implementation block
@property (assign,nonatomic) double pageActionInterval;                                   //@synthesize pageActionInterval=_pageActionInterval - In the implementation block
@property (assign,nonatomic) double pageRestInterval;                                     //@synthesize pageRestInterval=_pageRestInterval - In the implementation block
@property (assign,nonatomic) int cacheClearDirective;                                     //@synthesize cacheClearDirective=_cacheClearDirective - In the implementation block
@property (assign,nonatomic) BOOL collectHeapStatistics;                                  //@synthesize collectHeapStatistics=_collectHeapStatistics - In the implementation block
@property (assign,nonatomic) BOOL checkForWorldLeaks;                                     //@synthesize checkForWorldLeaks=_checkForWorldLeaks - In the implementation block
@property (assign,nonatomic,__weak) id<PageLoadTestRunnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long tabCount;                                 //@synthesize tabCount=_tabCount - In the implementation block
@property (assign,nonatomic) BOOL loadURLInNewTab;                                        //@synthesize loadURLInNewTab=_loadURLInNewTab - In the implementation block
@property (nonatomic,readonly) BrowserController * browserController;                     //@synthesize browserController=_browserController - In the implementation block
+(SCD_Struct_Pa11)heapStatistics;
+(void)addLeakToArray:(id)arg1 count:(int)arg2 name:(id)arg3 ;
+(id)worldLeaksString;
+(BOOL)closingBrowserWindowsForWorldLeakTest;
-(id)initWithBrowserController:(id)arg1 ;
-(void)setTestOptions:(id)arg1 ;
-(BrowserController *)browserController;
-(void)setResetsZoomBetweenPages:(BOOL)arg1 ;
-(BOOL)startPageAction:(id)arg1 ;
-(void)finishedTestPage:(id)arg1 ;
-(void)finishedTestRunner;
-(BOOL)performActionForPage:(id)arg1 ;
-(void)_closeLogStream;
-(BOOL)loadTestSuiteFile:(id)arg1 ;
-(void)addPageURL:(id)arg1 ;
-(void)setOutputFilename:(NSString *)arg1 ;
-(void)setExistingProperty:(id)arg1 to:(id)arg2 ;
-(void)setSuiteName:(NSString *)arg1 ;
-(void)removeURLsInRange:(NSRange)arg1 ;
-(BOOL)checkForWorldLeaksNow;
-(void)clearCacheWithURL:(id)arg1 ;
-(void)startNextPage;
-(void)_startNextPageNow;
-(void)startingTestRunner;
-(void)_pageTimeoutExpired:(id)arg1 ;
-(void)startingTestPage:(id)arg1 ;
-(void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3 ;
-(void)checkForWorldLeaksSoon;
-(void)_updatePageLoad:(id)arg1 stats:(id)arg2 ;
-(void)_checkRedirect:(id)arg1 ;
-(void)_pageRestExpired:(id)arg1 ;
-(void)_handleActionTimer:(id)arg1 ;
-(BOOL)resetsZoomBetweenPages;
-(void)closeBrowserWindows;
-(BOOL)finishCheckingForWorldLeaks;
-(void)closeBrowserWindowsAndFinishCheckingForWorldLeaks;
-(id)_pageLoadForTabDocument:(id)arg1 ;
-(NSString *)suiteName;
-(BOOL)disableProgressBar;
-(void)setDisableProgressBar:(BOOL)arg1 ;
-(BOOL)failFast;
-(void)setFailFast:(BOOL)arg1 ;
-(double)pageTimeout;
-(void)setPageTimeout:(double)arg1 ;
-(double)pageActionInterval;
-(void)setPageActionInterval:(double)arg1 ;
-(double)pageRestInterval;
-(void)setPageRestInterval:(double)arg1 ;
-(int)cacheClearDirective;
-(void)setCacheClearDirective:(int)arg1 ;
-(BOOL)collectHeapStatistics;
-(void)setCollectHeapStatistics:(BOOL)arg1 ;
-(BOOL)checkForWorldLeaks;
-(void)setCheckForWorldLeaks:(BOOL)arg1 ;
-(unsigned long long)tabCount;
-(void)setTabCount:(unsigned long long)arg1 ;
-(BOOL)loadURLInNewTab;
-(void)setLoadURLInNewTab:(BOOL)arg1 ;
-(void)setDelegate:(id<PageLoadTestRunnerDelegate>)arg1 ;
-(void)dealloc;
-(id<PageLoadTestRunnerDelegate>)delegate;
-(void)start;
-(void)finish;
-(unsigned long long)skipCount;
-(void)setSkipCount:(unsigned long long)arg1 ;
-(void)log:(id)arg1 ;
-(id)dismissAlert;
-(NSString *)outputFilename;
-(void)setLogFile:(NSString *)arg1 ;
-(NSString *)logFile;
@end
