/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, RBEntitlementPredicate, NSDictionary;

@interface RBDomainAttributeTemplate : NSObject {

	NSArray* _attributeGroups;
	NSString* _domain;
	NSString* _name;
	RBEntitlementPredicate* _originatorEntitlements;
	NSDictionary* _targetBundleProperties;
	RBEntitlementPredicate* _targetEntitlements;
	NSDictionary* _additionalRestrictions;
	NSString* _endowmentNamespace;

}

@property (nonatomic,retain) NSArray * attributeGroups;              //@synthesize attributeGroups=_attributeGroups - In the implementation block
-(id)description;
-(void)setAttributeGroups:(NSArray *)arg1 ;
-(NSArray *)attributeGroups;
@end

