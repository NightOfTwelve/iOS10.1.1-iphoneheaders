/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSString, MPMediaLibrary;

@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation {

	BOOL _shouldLibraryAdd;
	NSString* _globalPlaylistID;
	MPMediaLibrary* _mediaLibrary;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSString * globalPlaylistID;                  //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                      //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
@property (nonatomic,copy) id responseHandler;                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(NSString *)globalPlaylistID;
-(BOOL)shouldLibraryAdd;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
@end
