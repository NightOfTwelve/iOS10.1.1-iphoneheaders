/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation {

	SUMediaPlayerItem* _mediaItem;

}

@property (nonatomic,copy,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(id)init;
-(void)dealloc;
-(void)run;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(SUMediaPlayerItem *)mediaPlayerItem;
-(BOOL)_runHEADRequest:(id*)arg1 ;
@end

