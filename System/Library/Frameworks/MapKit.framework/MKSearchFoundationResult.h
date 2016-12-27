/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class NSData, MKMapItem, MKSearchFoundationRichText, NSString, NSArray, NSBundle, MKLocationManager, NSMutableArray, SFText, SFImage, SFActionItem;

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver> {

	BOOL _optionSmallerScreen;
	NSData* _mapsData;
	MKMapItem* _mapItem;
	MKSearchFoundationRichText* _secondLineDisplayedText;
	NSString* _distanceString;
	NSString* _temporaryReviewString;
	NSArray* _descriptions;
	MKSearchFoundationRichText* _thirdLineDisplayedText;
	unsigned long long _iconSize;
	unsigned long long _mksfResultType;
	NSBundle* _bundle;
	NSString* _bundleID;
	MKLocationManager* _locationManager;
	MKSearchFoundationRichText* _fourthLineDisplayedText;
	NSMutableArray* _secondLineText;
	NSMutableArray* _thirdLineText;
	NSMutableArray* _fourthLineText;
	id _attributionObserver;
	SFText* _title;
	SFImage* _thumbnail;
	SFActionItem* _action;

}

@property (nonatomic,retain) NSData * mapsData;                                                 //@synthesize mapsData=_mapsData - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                               //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) unsigned long long iconSize;                                       //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) unsigned long long mksfResultType;                                 //@synthesize mksfResultType=_mksfResultType - In the implementation block
@property (nonatomic,retain) NSString * temporaryReviewString;                                  //@synthesize temporaryReviewString=_temporaryReviewString - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                                 //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * distanceString;                                           //@synthesize distanceString=_distanceString - In the implementation block
@property (nonatomic,retain) MKLocationManager * locationManager;                               //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) MKSearchFoundationRichText * secondLineDisplayedText;              //@synthesize secondLineDisplayedText=_secondLineDisplayedText - In the implementation block
@property (nonatomic,retain) MKSearchFoundationRichText * thirdLineDisplayedText;               //@synthesize thirdLineDisplayedText=_thirdLineDisplayedText - In the implementation block
@property (nonatomic,retain) MKSearchFoundationRichText * fourthLineDisplayedText;              //@synthesize fourthLineDisplayedText=_fourthLineDisplayedText - In the implementation block
@property (nonatomic,copy) NSMutableArray * secondLineText;                                     //@synthesize secondLineText=_secondLineText - In the implementation block
@property (nonatomic,copy) NSMutableArray * thirdLineText;                                      //@synthesize thirdLineText=_thirdLineText - In the implementation block
@property (nonatomic,copy) NSMutableArray * fourthLineText;                                     //@synthesize fourthLineText=_fourthLineText - In the implementation block
@property (assign,nonatomic) BOOL optionSmallerScreen;                                          //@synthesize optionSmallerScreen=_optionSmallerScreen - In the implementation block
@property (nonatomic,retain) id attributionObserver;                                            //@synthesize attributionObserver=_attributionObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)action;
-(void)_commonInit;
-(void)setAction:(id)arg1 ;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id)thumbnail;
-(void)setThumbnail:(id)arg1 ;
-(void)setIconSize:(unsigned long long)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(BOOL)optionSmallerScreen;
-(BOOL)_isSmallerScreen;
-(void)setMapsData:(NSData *)arg1 ;
-(id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3 ;
-(id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3 ;
-(id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3 ;
-(id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3 ;
-(id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3 ;
-(id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3 ;
-(id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3 ;
-(id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3 ;
-(id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3 ;
-(id)mapItemFromFavoritesData:(id)arg1 ;
-(id)_defaultRichTextItems;
-(id)styledStringFromStringArray:(id)arg1 ;
-(void)_locationApprovalDidChange;
-(NSData *)mapsData;
-(MKSearchFoundationRichText *)secondLineDisplayedText;
-(void)setSecondLineDisplayedText:(MKSearchFoundationRichText *)arg1 ;
-(NSString *)distanceString;
-(void)setDistanceString:(NSString *)arg1 ;
-(NSString *)temporaryReviewString;
-(void)setTemporaryReviewString:(NSString *)arg1 ;
-(id)descriptions;
-(void)setDescriptions:(id)arg1 ;
-(MKSearchFoundationRichText *)thirdLineDisplayedText;
-(void)setThirdLineDisplayedText:(MKSearchFoundationRichText *)arg1 ;
-(unsigned long long)mksfResultType;
-(void)setMksfResultType:(unsigned long long)arg1 ;
-(MKLocationManager *)locationManager;
-(void)setLocationManager:(MKLocationManager *)arg1 ;
-(MKSearchFoundationRichText *)fourthLineDisplayedText;
-(void)setFourthLineDisplayedText:(MKSearchFoundationRichText *)arg1 ;
-(NSMutableArray *)secondLineText;
-(void)setSecondLineText:(NSMutableArray *)arg1 ;
-(NSMutableArray *)thirdLineText;
-(void)setThirdLineText:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fourthLineText;
-(void)setFourthLineText:(NSMutableArray *)arg1 ;
-(void)setOptionSmallerScreen:(BOOL)arg1 ;
-(id)attributionObserver;
-(void)setAttributionObserver:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(unsigned long long)iconSize;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
@end
