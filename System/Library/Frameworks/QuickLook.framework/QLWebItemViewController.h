/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/QLScrubViewDataSource.h>
#import <UIKit/UIWebPDFViewHandlerDelegate.h>

@class NSURLRequest, QLScrubView, NSMutableArray, QLPDFHanderDelegateForwarder, NSLayoutConstraint, QLWebViewPrintPageHelper, UIWebView, NSData, QLPreviewConverter, NSString;

@interface QLWebItemViewController : QLItemViewController <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate> {

	NSURLRequest* _previewRequest;
	unsigned _isLoadedDuringZoom : 1;
	unsigned _loadStarted : 1;
	unsigned long long webItemType;
	double _defaultZoom;
	QLScrubView* _scrubView;
	long long _lastPage;
	BOOL _inScroll;
	BOOL _webViewReadyForThumbnailing;
	NSMutableArray* _htmlSlideNodes;
	QLPDFHanderDelegateForwarder* _forwarder;
	/*^block*/id _completionBlock;
	NSLayoutConstraint* _scrubberRightConstraint;
	QLWebViewPrintPageHelper* _printPageHelper;
	BOOL _tryToFit;
	BOOL _fullScreen;
	BOOL _embeddedPDFWasCopied;
	UIWebView* _webView;
	NSData* _pdfPreviewData;
	QLPreviewConverter* _previewConverter;
	NSString* _password;

}

@property (readonly) UIWebView * webView;                                //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long webItemType; 
@property (readonly) NSData * pdfPreviewData;                            //@synthesize pdfPreviewData=_pdfPreviewData - In the implementation block
@property (readonly) QLPreviewConverter * previewConverter;              //@synthesize previewConverter=_previewConverter - In the implementation block
@property (readonly) QLScrubView * scrubView; 
@property (retain) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)scrollView;
-(id)transitioningView;
-(UIWebView *)webView;
-(id)printer;
-(long long)pageCount;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(QLScrubView *)scrubView;
-(id)alertViewForUIWebPDFViewHandler:(id)arg1 ;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1 ;
-(CGPoint)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(CGPoint)arg2 ;
-(id)_defaultColor;
-(unsigned long long)currentPageNumber;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(BOOL)canPinchToDismiss;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)canEnterFullScreen;
-(id)registeredKeyCommands;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg1 ;
-(QLPreviewConverter *)previewConverter;
-(id)_htmlPageXPath;
-(long long)numberOfPagesInScrubView:(id)arg1 ;
-(void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned long long)arg2 ;
-(CGSize)scrubView:(id)arg1 pageSizeAtIndex:(unsigned long long)arg2 ;
-(id)scrubView:(id)arg1 thumbnailOperationForPageAtIndex:(unsigned long long)arg2 ;
-(NSData *)pdfPreviewData;
-(unsigned long long)webItemType;
-(void)_updateScrubberVisibilityAnimated:(BOOL)arg1 ;
-(void)_hideScrubberIfNeeded:(BOOL)arg1 ;
-(void)_updateScrubberForTraitCollection:(id)arg1 animated:(BOOL)arg2 ;
-(void)performCompletionBlockWithError:(id)arg1 ;
-(CGPDFDocumentRef)_getCGPDFDocumentRef;
-(void)_showScrubberIfNeeded:(BOOL)arg1 ;
-(id)_htmlSlideNodes;
-(CGSize)pageSizeAtIndex:(long long)arg1 ;
-(void)scrollToPage:(unsigned long long)arg1 ;
-(BOOL)canSwipeToDismiss;
@end
