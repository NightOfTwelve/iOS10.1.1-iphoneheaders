/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsSuggestionsSink.h>

@protocol MapsSuggestionsSink;
@class NSString;

@interface SinkContainer : NSObject <MapsSuggestionsSink> {

	unsigned long long _hashValue;
	id<MapsSuggestionsSink> _weakSink;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsSink> weakSink;              //@synthesize weakSink=_weakSink - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateForMapsSuggestionsManager:(id)arg1 ;
-(id)initWithSink:(id)arg1 ;
-(id<MapsSuggestionsSink>)weakSink;
-(void)setWeakSink:(id<MapsSuggestionsSink>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)uniqueName;
@end

