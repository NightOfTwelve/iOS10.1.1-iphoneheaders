/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUArrayCellConfiguration.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {

	NSMutableDictionary* _artworkByURL;
	NSMutableArray* _artworkLoadOperations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyDefaultContext;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)dealloc;
-(void)setRepresentedObject:(id)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)cancelArtworkRequests;
-(id)copyImageDataProvider;
-(id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2 ;
-(void)reloadAfterArtworkLoad;
-(id)artworkImageForItemImage:(id)arg1 ;
-(id)artworkImageForURL:(id)arg1 ;
@end

