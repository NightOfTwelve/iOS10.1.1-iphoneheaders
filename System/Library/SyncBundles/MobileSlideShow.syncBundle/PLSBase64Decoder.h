/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLSBase64Decoder : NSObject {

	char _decoder[128];
	BOOL _photoUUID;

}
+(id)decoderForPhotoUUID;
+(id)decoder;
-(id)decodeString:(id)arg1 ;
-(id)initForPhotoUUID;
-(id)init;
@end

