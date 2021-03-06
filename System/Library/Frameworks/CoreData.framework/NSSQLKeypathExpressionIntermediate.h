/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {

	BOOL _substitutePK;

}

@property (assign,nonatomic) BOOL substitutePK;              //@synthesize substitutePK=_substitutePK - In the implementation block
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_propertyDescriptionForKeypath:(id)arg1 startingAtEntity:(id)arg2 allowToMany:(BOOL)arg3 allowToOne:(BOOL)arg4 lastKeyVisited:(id*)arg5 inContext:(id)arg6 ;
-(BOOL)substitutePK;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(void)setSubstitutePK:(BOOL)arg1 ;
-(id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5 ;
-(id)_propertyDescriptionsForKeypath:(id)arg1 rootedAtEntity:(id)arg2 allowToMany:(BOOL)arg3 allowToOne:(BOOL)arg4 lastKeyVisited:(id*)arg5 inContext:(id)arg6 ;
@end

