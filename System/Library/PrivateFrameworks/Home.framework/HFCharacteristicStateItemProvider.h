/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HFServiceItem, NSSet;

@interface HFCharacteristicStateItemProvider : HFItemProvider {

	HFServiceItem* _serviceItem;
	id<HFCharacteristicValueSource> _valueSource;
	NSSet* _characteristicStateItems;

}

@property (nonatomic,retain) NSSet * characteristicStateItems;                           //@synthesize characteristicStateItems=_characteristicStateItems - In the implementation block
@property (nonatomic,readonly) HFServiceItem * serviceItem;                              //@synthesize serviceItem=_serviceItem - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
+(id)standardCharacteristicTypes;
+(id)_setupCharacteristicStateItemForCharacteristic:(id)arg1 valueSource:(id)arg2 serviceType:(id)arg3 ;
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 serviceItem:(id)arg2 ;
-(NSSet *)characteristicStateItems;
-(void)setCharacteristicStateItems:(NSSet *)arg1 ;
-(/*^block*/id)characteristicStateItemComparator;
-(HFServiceItem *)serviceItem;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)reloadItems;
-(id)invalidationReasons;
@end

