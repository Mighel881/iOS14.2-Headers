/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _modifierValidator;
	id<CKObjectValidating> _leftExpressionValidator;
	id<CKObjectValidating> _operatorValidator;
	id<CKObjectValidating> _optionsValidator;
	id<CKObjectValidating> _rightExpressionValidator;

}

@property (nonatomic,retain) id<CKObjectValidating> modifierValidator;                     //@synthesize modifierValidator=_modifierValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> leftExpressionValidator;               //@synthesize leftExpressionValidator=_leftExpressionValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> operatorValidator;                     //@synthesize operatorValidator=_operatorValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> optionsValidator;                      //@synthesize optionsValidator=_optionsValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> rightExpressionValidator;              //@synthesize rightExpressionValidator=_rightExpressionValidator - In the implementation block
-(id)CKPropertiesDescription;
-(void)setOptionsValidator:(id<CKObjectValidating>)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setLeftExpressionValidator:(id<CKObjectValidating>)arg1 ;
-(void)setRightExpressionValidator:(id<CKObjectValidating>)arg1 ;
-(id<CKObjectValidating>)leftExpressionValidator;
-(void)setModifierValidator:(id<CKObjectValidating>)arg1 ;
-(id<CKObjectValidating>)rightExpressionValidator;
-(void)setOperatorValidator:(id<CKObjectValidating>)arg1 ;
-(id<CKObjectValidating>)operatorValidator;
-(id<CKObjectValidating>)modifierValidator;
-(id<CKObjectValidating>)optionsValidator;
@end
