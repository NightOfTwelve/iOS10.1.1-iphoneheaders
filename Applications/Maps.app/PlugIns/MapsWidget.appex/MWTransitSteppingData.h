/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray;

@interface MWTransitSteppingData : NSObject <NSCoding> {

	NSArray* _items;
	long long _currentStepIndex;

}

@property (nonatomic,copy) NSArray * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) long long currentStepIndex;              //@synthesize currentStepIndex=_currentStepIndex - In the implementation block
-(id)initWithItems:(id)arg1 currentStepIndex:(long long)arg2 ;
-(BOOL)isEqualToTransitSteppingData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)currentStepIndex;
-(void)setCurrentStepIndex:(long long)arg1 ;
@end
