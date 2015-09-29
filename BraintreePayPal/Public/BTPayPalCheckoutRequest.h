#import <Foundation/Foundation.h>
#import "BTNullability.h"
#import "BTPostalAddress.h"

BT_ASSUME_NONNULL_BEGIN

/// A PayPal checkout request groups options that control a user-facing PayPal checkout flow.
///
/// A checkout request must specify an anticipated transaction amount.
///
/// @see BTPayPalDriver
@interface BTPayPalCheckoutRequest : NSObject

/// Initialize a checkout request with an amount.
///
/// @param amount An amount greater than or equal to zero.
/// @return A checkout request, or `nil` if the amount is `nil` or less than 0.
- (BT_NULLABLE instancetype)initWithAmount:(NSDecimalNumber *)amount;

@property (nonatomic, readonly, strong) NSDecimalNumber *amount;
@property (nonatomic, BT_NULLABLE, copy) NSString *currencyCode;
@property (nonatomic, BT_NULLABLE, copy) NSString *localeCode;
@property (nonatomic)                    BOOL enableShippingAddress;
@property (nonatomic)                    BOOL addressOverride;
@property (nonatomic, BT_NULLABLE, strong) BTPostalAddress *shippingAddress;

@end

BT_ASSUME_NONNULL_END