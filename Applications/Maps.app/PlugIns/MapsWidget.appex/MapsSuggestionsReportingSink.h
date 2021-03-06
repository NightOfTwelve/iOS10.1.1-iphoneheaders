/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <MapsWidget/MapsSuggestionsSink.h>

@protocol OS_dispatch_queue;
@class NSObject, MapsSuggestionsEngine, NSString;

@interface MapsSuggestionsReportingSink : NSObject <MapsSuggestionsSink> {

	NSObject*<OS_dispatch_queue> _queue;
	MapsSuggestionsEngine* _engine;
	NSArray* _currentEntries;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(void)load;
-(void)invalidateForMapsSuggestionsManager:(id)arg1 ;
-(void)clear;
-(NSString *)uniqueName;
-(id)initWithEngine:(id)arg1 ;
-(id)report;
@end

