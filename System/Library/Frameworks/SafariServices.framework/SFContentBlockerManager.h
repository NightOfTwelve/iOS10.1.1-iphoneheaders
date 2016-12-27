/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKUserContentController, NSArray, NSMutableSet;

@interface SFContentBlockerManager : NSObject {

	id _extensionMatchingContext;
	WKUserContentController* _userContentController;
	NSArray* _extensions;
	NSMutableSet* _observers;
	BOOL _lastExtensionDiscoveryHadError;

}

@property (nonatomic,readonly) NSArray * extensions; 
@property (nonatomic,readonly) WKUserContentController * userContentController; 
+(id)sharedManager;
+(id)_contentBlockerLoaderConnection;
+(void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)contentBlockerStore;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)extensions;
-(id)displayNameForExtension:(id)arg1 ;
-(void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_beginContentBlockerDiscovery;
-(void)reloadUserContentController;
-(BOOL)extensionIsEnabled:(id)arg1 ;
-(void)setExtension:(id)arg1 isEnabled:(BOOL)arg2 ;
-(WKUserContentController *)userContentController;
@end
