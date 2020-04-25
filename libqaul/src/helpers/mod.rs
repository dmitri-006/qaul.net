//! A set of API helpers

mod subs;
pub use subs::{Subscription, SubId};

mod diff;
pub use diff::{ItemDiff, ItemDiffExt, MapDiff, MapDiffExt, SetDiff, SetDiffExt};

mod query;
pub use query::QueryResult;

/// A searchable metadata tag for messages and data files
///
/// Data that is stored and managed by libqaul can be tagged to make
/// searching easier and faster, because the backing storage is
/// encrypted and might not be immediately accessible.
///
/// It also allows a service to tag data with specific parameters that
/// will be relevant to it's implementation, without having to teach
/// libqaul about what they mean (for example `room-id` for
/// `net.qaul.chat`).
pub type Tag = alexandria::utils::Tag;

pub use alexandria::utils::TagSet;